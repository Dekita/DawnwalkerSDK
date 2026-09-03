#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SaveGameScreenshotResultMCDelegateDelegate.h"
#include "AsyncAction_SaveGameScreenshot.generated.h"

class UAsyncAction_SaveGameScreenshot;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUI_API UAsyncAction_SaveGameScreenshot : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameScreenshotResultMCDelegate OnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    UAsyncAction_SaveGameScreenshot();

private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_SaveGameScreenshot* GetSaveScreenshotAsync(UObject* InWorldContextObject, const FString& NewName);
    
};

