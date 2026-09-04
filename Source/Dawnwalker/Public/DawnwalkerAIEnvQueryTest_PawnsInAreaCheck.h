#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ECountActorsTestType.h"
#include "DawnwalkerAIEnvQueryTest_PawnsInAreaCheck.generated.h"

UCLASS(Blueprintable)
class UDawnwalkerAIEnvQueryTest_PawnsInAreaCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SphereRadiusThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountActorsTestType TestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnlyPawnsInCombat;
    
    UDawnwalkerAIEnvQueryTest_PawnsInAreaCheck();

};

