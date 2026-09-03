#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "AITask_FollowSpline.generated.h"

class AHumanoidNPCBase;
class USplineComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UAITask_FollowSpline : public UAITask_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USplineComponent> FollowedSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoidNPCBase* CharacterToKeepVisAnimTick;
    
public:
    UAITask_FollowSpline(const FObjectInitializer& ObjectInitializer);

};

