// Fill out your copyright notice in the Description page of Project Settings.


#include "AppFunctionLib.h"
#include <SocketSubsystem.h>
#include <IPAddress.h>

FString UAppFunctionLib::GetLocalIpAdress()
{
	bool canBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog,canBind);

	return (localIp->IsValid() ? localIp->ToString(false) : "");
}