#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DroppedWeaponBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API ADroppedWeaponBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    ADroppedWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
};

