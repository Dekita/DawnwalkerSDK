#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "RebelRoadsFollowingComponentImpl.generated.h"

class URebelRoadsConfig;
class URebelRoadsMoveTargetSubsystem;
class URebelRoadsPathFindingQueryOwnerWithContext;
class URebelRoadsSubsystemImpl;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELROADS_API URebelRoadsFollowingComponentImpl : public UPathFollowingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsPathFindingQueryOwnerWithContext* PathFindingQueryOwnerWithContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsMoveTargetSubsystem* MoveTargetSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsSubsystemImpl* RoadsSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsConfig* Config;
    
public:
    URebelRoadsFollowingComponentImpl(const FObjectInitializer& ObjectInitializer);

};

