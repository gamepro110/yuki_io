// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <yuki_io/BaseTypes/ItemEffectBase.h>

#include "HealEffect.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YUKI_IO_API UHealEffect : public UItemEffectBase
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealEffect();

	UPROPERTY(EditAnywhere, Category = "ItemEffect")
		int healAmount;

public:
	virtual void ActivateEffect(AActor* targetActor) override;
};
