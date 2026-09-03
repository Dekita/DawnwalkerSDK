#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreditsEntry.h"
#include "CreditsEntryUIObject.generated.h"

class UCreditsData;

UCLASS(Blueprintable)
class DOGWOODUI_API UCreditsEntryUIObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsData;
    
public:
    UCreditsEntryUIObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCreditsEntry GetEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCreditsData* GetCreditsData() const;
    
};

