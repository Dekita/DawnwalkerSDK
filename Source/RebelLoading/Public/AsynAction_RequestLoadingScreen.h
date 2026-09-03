#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "LoadingScreenParams.h"
#include "AsynAction_RequestLoadingScreen.generated.h"

class UAsynAction_RequestLoadingScreen;
class UObject;

UCLASS(Blueprintable)
class REBELLOADING_API UAsynAction_RequestLoadingScreen : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoadingScreenReadyDelegate);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenReadyDelegate OnLoadingScreenReady;
    
public:
    UAsynAction_RequestLoadingScreen();

private:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsynAction_RequestLoadingScreen* RequestLoadingScreenWithParams(FLoadingScreenParams InParams, const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsynAction_RequestLoadingScreen* RequestLoadingScreen(const UObject* InWorldContextObject);
    
};

