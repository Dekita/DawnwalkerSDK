#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveSystemBlueprintLibrary.generated.h"

class USaveSystemInterface;

UCLASS(Blueprintable)
class PERSISTENCY_API USaveSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ScheduleAutosave(USaveSystemInterface* SaveSystem, const FString& Source, const FString& SourceLocation);
    
};

