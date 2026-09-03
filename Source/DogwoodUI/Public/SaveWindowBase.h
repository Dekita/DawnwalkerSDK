#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "ESaveLoadWindowType.h"
#include "ESaveRequestResult.h"
#include "Templates/SubclassOf.h"
#include "SaveWindowBase.generated.h"

class UDWButtonBase;
class UListView;
class USaveUIObject;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USaveWindowBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDWButtonBase> SaveButtonWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveLoadWindowType ActiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USaveUIObject*> SaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* SaveListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveUIObject* NewSaveButtonObject;
    
public:
    USaveWindowBase();

    UFUNCTION(BlueprintCallable)
    void SetType(ESaveLoadWindowType InType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestOverwriteSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    void RequestNewSave();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    void RequestDeleteSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSavingEnabled();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetEntryWidgetFromItem(USaveUIObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostSaveCreationRequested(ESaveRequestResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDoneSaving();
    
};

