#pragma once
#include "CoreMinimal.h"
#include "EFastTravelResult.h"
#include "MappinInstanceId.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ELoadingScreenState.h"
#include "AsyncAction_FastTravelWithConfirmation.generated.h"

class UAsyncAction_FastTravelWithConfirmation;
class UDialogDescriptor;
class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UAsyncAction_FastTravelWithConfirmation : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFastTravelExecuted, EFastTravelResult, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFastTravelCancelled);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFastTravelExecuted OnFastTravelExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFastTravelCancelled OnCancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogDescriptor* Descriptor;
    
public:
    UAsyncAction_FastTravelWithConfirmation();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenStateChanged(ELoadingScreenState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_FastTravelWithConfirmation* FastTravelWithConfirmation(UObject* InWorldContextObject, const FMappinInstanceId& TargetMapPin, const FText& Title, const FText& Message);
    
};

