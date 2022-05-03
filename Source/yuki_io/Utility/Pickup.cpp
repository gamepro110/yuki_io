// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"

// Sets default values
APickup::APickup() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup"));
	RootComponent = mesh;

	collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	collisionSphere->SetupAttachment(RootComponent);
	collisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collisionSphere->SetCollisionProfileName(TEXT("PhysicsActor"));
	collisionSphere->SetSimulatePhysics(false);
	collisionSphere->SetEnableGravity(true);
}

void APickup::OnOverlapBegin(AActor* pickupActor, AActor* otherActor) {
	UE_LOG(LogTemp, Warning, TEXT("picked up item"));
	itemEffect->ActivateEffect(otherActor);
	Destroy();
}

// Called when the game starts or when spawned
void APickup::BeginPlay() {
	Super::BeginPlay();
	itemEffect = FindComponentByClass<UItemEffectBase>();
	OnActorBeginOverlap.AddDynamic(this, &APickup::OnOverlapBegin);
}
