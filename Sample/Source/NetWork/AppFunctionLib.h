// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppFunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class NETWORK_API UAppFunctionLib : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable,Category="BlueprintFunctionLibrary")
	static FString GetLocalIpAdress();

};
