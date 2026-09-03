#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ContentWidget.h"
#include "NamedToggleableContainer.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UNamedToggleableContainer : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShownStateChangedDelegate, bool, bIsShown);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContainerTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShownStateChangedDelegate ShownStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShown;
    
public:
    UNamedToggleableContainer();

    UFUNCTION(BlueprintCallable)
    void SetShown(bool bInShouldBeShown);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShownStateChanged(bool bIsShown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShown() const;
    
};

