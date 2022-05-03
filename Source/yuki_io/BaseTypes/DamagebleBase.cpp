// Fill out your copyright notice in the Description page of Project Settings.

#include "DamagebleBase.h"

// Sets default values for this component's properties
UDamagebleBase::UDamagebleBase() {
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UDamagebleBase::BeginPlay() {
	Super::BeginPlay();
}

void UDamagebleBase::Heal(int value) {
	health = (health + value < maxHealth) ? health + value : maxHealth;
}

void UDamagebleBase::TakeDamage(int value) {
	health = (health - value < 1) ? 0 : health - value;

	if (health == 0) {
		Die();
	}
}

void UDamagebleBase::Die() {
}
