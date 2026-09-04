#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DawnwalkerAI_EnvQueryTest_IsInDoor.generated.h"

UCLASS(Blueprintable)
class UDawnwalkerAI_EnvQueryTest_IsInDoor : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UDawnwalkerAI_EnvQueryTest_IsInDoor();

};

