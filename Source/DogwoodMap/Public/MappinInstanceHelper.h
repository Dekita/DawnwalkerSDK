#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MappinInstanceId.h"
#include "MappinInstanceHelper.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API UMappinInstanceHelper : public UObject {
    GENERATED_BODY()
public:
    UMappinInstanceHelper();

    UFUNCTION(BlueprintCallable)
    static int64 ConventMappinInstanceIdToInt64(const FMappinInstanceId& ID);
    
};

