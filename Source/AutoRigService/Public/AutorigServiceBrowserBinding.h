#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutorigServiceBrowserBinding.generated.h"

UCLASS(Blueprintable)
class AUTORIGSERVICE_API UAutorigServiceBrowserBinding : public UObject {
    GENERATED_BODY()
public:
    UAutorigServiceBrowserBinding();

    UFUNCTION(BlueprintCallable)
    void LoginSessionId(const FString& ID);
    
};

