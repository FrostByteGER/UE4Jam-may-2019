// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "UObject/SoftObjectPtr.h"
#include "PaperFlipbookComponent.h"
#include "PaperFlipbook.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Bullet.generated.h"


UCLASS()
class UE4JAMGAME_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperFlipbookComponent* Bullet;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables", meta = (DisplayName="Damage"))
	float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables", meta = (DisplayName = "Projectile Speed"))
	float ProjectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables", meta = (DisplayName = "Gravity Scale"))
	float GravityScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables", meta = (DisplayName = "Lifetime"))
	float Lifetime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables", meta = (DisplayName = "Bullet Image"))
	TAssetPtr<UPaperFlipbook> BulletImage;

	// Sets default values for this actor's properties
	ABullet();

	// Called when the game starts or when spawned
	UFUNCTION(BlueprintNativeEvent)
	void BeginPlay() override;

	virtual void BeginPlay_Implementation();
	
	// Called every frame
	UFUNCTION(BlueprintNativeEvent)
	void Tick( float DeltaSeconds ) override;

	virtual void Tick_Implementation(float DeltaSeconds);

	
	
};
