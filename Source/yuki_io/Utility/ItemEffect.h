// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemEffect.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UItemEffect : public UInterface
{
	GENERATED_BODY()
};

class YUKI_IO_API IItemEffect {
	GENERATED_BODY()

public:
	virtual void ActivateEffect(AActor* targetActor) = 0;
};
