#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "RebelAIStubEquipmentProxy.h"
#include "DogwoodAIStubEquipmentProxy.generated.h"

class AActor;
class ISheathedWeaponHolder;
class USheathedWeaponHolder;
class UEnemyConfig;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAIStubEquipmentProxy : public URebelAIStubEquipmentProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISheathedWeaponHolder> SheathedWeaponHolder;
    
public:
    UDogwoodAIStubEquipmentProxy();

private:
    UFUNCTION(BlueprintCallable)
    void Temp_OnHitboxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UEnemyConfig* GetEnemyConfig() const;
    
};

