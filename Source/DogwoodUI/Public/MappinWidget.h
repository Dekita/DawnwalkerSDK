#pragma once
#include "CoreMinimal.h"
#include "EMappinTarget.h"
#include "MappinInstanceId.h"
#include "Blueprint/UserWidget.h"
#include "MappinWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMappinWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinTarget MappinTarget;
    
public:
    UMappinWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateOverlays(FMappinInstanceId MappinId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupMappin(FMappinInstanceId MappinId);
    
    UFUNCTION(BlueprintCallable)
    void SetMappinTarget(EMappinTarget InMappinTarget);
    
};

