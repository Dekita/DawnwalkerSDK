#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBodyMeshType.h"
#include "AppearanceReceiver.generated.h"

class UCapsuleComponent;
class UInventoryComponent;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable)
class DOGWOODINVENTORY_API UAppearanceReceiver : public UInterface {
    GENERATED_BODY()
};

class DOGWOODINVENTORY_API IAppearanceReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBodyApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasOverrideLOD(int32& OutLOD) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetParentScaleMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetMeshComponentByBodyMeshType(const EBodyMeshType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetLeaderMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInventoryComponent* GetInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCapsuleComponent* GetBodyCapsule() const;
    
};

