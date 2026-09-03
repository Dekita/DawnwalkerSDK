#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_FocusAbilitySequenceCustomDot2D.generated.h"

UCLASS(Blueprintable)
class DOGWOODFOCUS_API UEnvQueryTest_FocusAbilitySequenceCustomDot2D : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetActorDirection;
    
    UEnvQueryTest_FocusAbilitySequenceCustomDot2D();

};

