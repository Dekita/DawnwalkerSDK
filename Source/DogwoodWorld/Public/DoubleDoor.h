#pragma once
#include "CoreMinimal.h"
#include "Door.h"
#include "DoubleDoor.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ADoubleDoor : public ADoor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SecondWingDoorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SecondInvisibleWallForCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SecondWingMesh;
    
    ADoubleDoor(const FObjectInitializer& ObjectInitializer);

};

