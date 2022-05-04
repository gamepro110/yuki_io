// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <yuki_io/Utility/Damageble.h>

#include "DamagebleBase.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YUKI_IO_API UDamagebleBase : public UActorComponent, public IDamageble {
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDamagebleBase();

	UPROPERTY(EditAnywhere)
		int health;

	UPROPERTY(EditAnywhere)
		int maxHealth;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual const int& GetHp() const override;
	virtual const int& GetMaxHp() const override;
	virtual void Heal(int value) override;
	virtual void TakeDamage(int value) override;
	virtual void Die() override;
};
