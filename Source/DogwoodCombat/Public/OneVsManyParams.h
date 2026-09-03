#pragma once
#include "CoreMinimal.h"
#include "OneVsManyParams.generated.h"

class UEnemyConfig;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FOneVsManyParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnemyConfig> EnemyConfig;
    
    FOneVsManyParams();
};

