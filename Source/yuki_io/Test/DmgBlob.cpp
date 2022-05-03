// Fill out your copyright notice in the Description page of Project Settings.

#include "DmgBlob.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "../BaseTypes/DamagebleBase.h"

// Sets default values
ADmgBlob::ADmgBlob() {
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = mesh;

	collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	collisionSphere->SetupAttachment(RootComponent);
}

void ADmgBlob::BeginPlay() {
	collisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ADmgBlob::OnOverlapBegin);
}

void ADmgBlob::OnOverlapBegin(UPrimitiveComponent* hitComp, AActor* otherActor,
	UPrimitiveComponent* otherComp, int otherBodyIndex, bool bFromSweep,
	const FHitResult& sweepResult) {
	auto found = otherActor->FindComponentByClass<UDamagebleBase>();
	IDamageble* dmgble = Cast<UDamagebleBase>(found);

	if (dmgble) {
		dmgble->TakeDamage(damageAmount);
		Destroy();
	}
}

