#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreditsEntry.h"
#include "CreditsEntryInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODUI_API UCreditsEntryInterface : public UInterface {
    GENERATED_BODY()
};

class ICreditsEntryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEntry(const FCreditsEntry& InEntry);
    
};

