#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESOIObjectDistance.h"
#include "InvestigationComponent.h"
#include "SmallObjectInvestigationComponent.generated.h"

class AInvestigationCameraActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API USmallObjectInvestigationComponent : public UInvestigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESOIObjectDistance DistanceFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerTeleportTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInvestigationCameraActor* SpawnedCameraActor;
    
    USmallObjectInvestigationComponent(const FObjectInitializer& ObjectInitializer);

};

