#pragma once
#include "CoreMinimal.h"
#include "MappinInstanceId.h"
#include "Blueprint/UserWidget.h"
#include "MapMappin.generated.h"

class UImage;
class UMapMappin;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMapMappin : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappinSelectedDelegate, UMapMappin*, Mappin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappinDeselectedDelegate, UMapMappin*, Mappin);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinSelectedDelegate OnMappinSelectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinDeselectedDelegate OnMappinDeselectedEvent;
    
    UMapMappin();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Track();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMappinId(const FMappinInstanceId& InstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNewMappinAnimation(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingNewMappinAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FMappinInstanceId GetMappinId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UImage* GetAreaImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deselect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cleanup();
    
};

