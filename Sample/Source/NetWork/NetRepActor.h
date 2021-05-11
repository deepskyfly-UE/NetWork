// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetRepActor.generated.h"

UCLASS()
class NETWORK_API ANetRepActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetRepActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void SetIsOn(bool newValue);

	UPROPERTY(BlueprintReadWrite,ReplicatedUsing = OnRep_BoolParam,meta=(COND_Custom))
	bool bIsOn;

	UFUNCTION()
	void OnRep_BoolParam();

	UFUNCTION(BlueprintImplementableEvent)
	void EventBlueprintBoolParamChanged(bool isOn);

};
