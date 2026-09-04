#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMappinTarget.h"
#include "MappinInstanceId.h"
#include "MappinInstanceIterator.generated.h"

class UMappinSystemImpl;

UCLASS(Blueprintable)
class UMappinInstanceIterator : public UObject {
    GENERATED_BODY()
public:
    UMappinInstanceIterator();

private:
    UFUNCTION(BlueprintCallable)
    void IsValid(bool& Output);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const UMappinSystemImpl* MappinSystem, EMappinTarget MappinTarget);
    
    UFUNCTION(BlueprintCallable)
    void Increment();
    
    UFUNCTION(BlueprintCallable)
    void GetMappinInstanceId(FMappinInstanceId& ID);
    
};

