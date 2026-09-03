#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectSpecHandle.h"
#include "OnProjectileHitDelegateDelegate.h"
#include "ActiveAbilityProjectile.generated.h"

class AActor;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UActiveAbilityProjectile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedProjectileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Exponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle OnEndEffectForSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpecHandle OnEndEffectForDestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocationSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndPointPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileHitDelegate OnProjectileHitDelegate;
    
    UActiveAbilityProjectile();

    UFUNCTION(BlueprintCallable)
    bool UpdateProjectilePosition(float DelaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeProjectile(UNiagaraSystem* NiagaraSystem, AActor* Source, AActor* Destination, float InTravelTime, float InArcHeight, float InArcWidth, float InExponent, bool bInIsBeam, FName InLocationSocketName);
    
public:
    UFUNCTION(BlueprintCallable)
    static FVector GetUpdatedPosition(UPARAM(Ref) FVector& StartLocation, UPARAM(Ref) FVector& EndLocation, float NewElapsedTime, float NewTravelTime, float NewArcHeight, float NewExponent, float NewArcWidth);
    
private:
    UFUNCTION(BlueprintCallable)
    void FireWithDelay(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
    UFUNCTION(BlueprintCallable)
    void DeinitializeProjectile();
    
};

