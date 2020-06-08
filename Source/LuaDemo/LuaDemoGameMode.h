// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnLuaInterface.h"
#include "LuaDemoGameMode.generated.h"

UCLASS(minimalapi)
class ALuaDemoGameMode : public AGameModeBase, public IUnLuaInterface
{
	GENERATED_BODY()

public:
	ALuaDemoGameMode();
    
public:
    virtual FString GetModuleName_Implementation() const override
    {
        return TEXT("Blueprints/LuaDemoGameModeCpp_C");
    }
};
