#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_NotTooCloseToUsedLocation.generated.h"

UCLASS(Blueprintable)
class UEnvQueryTest_NotTooCloseToUsedLocation : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinDistance;
    
    UEnvQueryTest_NotTooCloseToUsedLocation();

};

