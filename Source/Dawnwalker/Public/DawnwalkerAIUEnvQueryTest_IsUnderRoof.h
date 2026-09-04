#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Engine/EngineTypes.h"
#include "DawnwalkerAIUEnvQueryTest_IsUnderRoof.generated.h"

UCLASS(Blueprintable)
class UDawnwalkerAIUEnvQueryTest_IsUnderRoof : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue CheckSize;
    
public:
    UDawnwalkerAIUEnvQueryTest_IsUnderRoof();

};

