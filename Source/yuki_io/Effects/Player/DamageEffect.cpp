// Fill out your copyright notice in the Description page of Project Settings.

#include "DamageEffect.h"

UDamageEffect::UDamageEffect() {}

void UDamageEffect::ActivateEffect(AActor* targetActor) {
	auto found = targetActor->FindComponentByClass<UDamagebleBase>();
	IDamageble* dmgble = Cast<UDamagebleBase>(found);

	if (dmgble) {
		dmgble->TakeDamage(dmgAmount);
		UE_LOG(LogTemp, Warning, TEXT("Healing player"));
	}
}