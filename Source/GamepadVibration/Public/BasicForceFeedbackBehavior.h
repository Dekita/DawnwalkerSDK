#pragma once
#include "CoreMinimal.h"
#include "FeedbackBehavior.h"
#include "BasicForceFeedbackBehavior.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class GAMEPADVIBRATION_API UBasicForceFeedbackBehavior : public UFeedbackBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UBasicForceFeedbackBehavior();

};

