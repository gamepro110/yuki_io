// Fill out your copyright notice in the Description page of Project Settings.

#include "HealEffect.h"
#include <yuki_io/BaseTypes/DamagebleBase.h>

// Sets default values for this component's properties
UHealEffect::UHealEffect() {}

void UHealEffect::ActivateEffect(AActor* targetActor) {
	auto found = targetActor->FindComponentByClass<UDamagebleBase>();
	IDamageble* dmgble = Cast<UDamagebleBase>(found);

	if (dmgble) {
		dmgble->Heal(healAmount);
		UE_LOG(LogTemp, Warning, TEXT("Healing player"));
	}
}
