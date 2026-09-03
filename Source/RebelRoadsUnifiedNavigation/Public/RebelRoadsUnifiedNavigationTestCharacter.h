#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "RebelSpatialElementProxyInterface.h"
#include "ERebelRoadsUnifiedNavigationTestProfile.h"
#include "Templates/SubclassOf.h"
#include "RebelRoadsUnifiedNavigationTestCharacter.generated.h"

class AActor;

UCLASS(Blueprintable)
class REBELROADSUNIFIEDNAVIGATION_API ARebelRoadsUnifiedNavigationTestCharacter : public ACharacter, public IRebelSpatialElementProxyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableRandomWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WaypointActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsUnifiedNavigationTestProfile NavProfilePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldAvoidUTurns: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavigationZoneConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform NavigationZoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavigationZoneExtent;
    
public:
    ARebelRoadsUnifiedNavigationTestCharacter(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

