// Fill out your copyright notice in the Description page of Project Settings.


#include "NetRepActor.h"
#include "Runtime\Engine\Classes\Kismet\KismetSystemLibrary.h"
#include "Runtime\Engine\Public\Net\UnrealNetwork.h"

// Sets default values
ANetRepActor::ANetRepActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ANetRepActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANetRepActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANetRepActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const 
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANetRepActor,bIsOn);
}

void ANetRepActor::SetIsOn(bool newValue)
{
	if(HasAuthority() && bIsOn != newValue)
	{
		bIsOn = newValue;
		OnRep_BoolParam();
	}
}


void ANetRepActor::OnRep_BoolParam()
{
	EventBlueprintBoolParamChanged(bIsOn);
}
