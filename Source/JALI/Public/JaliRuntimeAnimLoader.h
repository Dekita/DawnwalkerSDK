#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JaliRuntimeAnimLoaderOnCompletedDelegate.h"
#include "JaliRuntimeAnimSettings.h"
#include "JaliRuntimeAnimLoader.generated.h"

class UJaliRuntimeAnimLoader;
class UObject;

UCLASS(Blueprintable)
class JALI_API UJaliRuntimeAnimLoader : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJaliRuntimeAnimLoaderOnCompleted Completed;
    
    UJaliRuntimeAnimLoader();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UJaliRuntimeAnimLoader* LoadRuntimeAnimSettingsAsync(UObject* WorldContextObject, FJaliRuntimeAnimSettings AnimSettings);
    
};

