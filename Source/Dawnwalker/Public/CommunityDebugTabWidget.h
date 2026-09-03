#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "DebugTabWidget.h"
#include "EStubDebugMode.h"
#include "CommunityDebugTabWidget.generated.h"

class UCommunityBaseDebug;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UCommunityDebugTabWidget : public UDebugTabWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStubDebugMode StubDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPanelShown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommunityBaseDebug*> Roots;
    
public:
    UCommunityDebugTabWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateStubDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDay(const FDayTime& Time);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogUpdated();
    
    UFUNCTION(BlueprintCallable)
    FDayTime GetTimeOfDay();
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<UCommunityBaseDebug*> GetAllFiles();
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetAllChildren(UObject* Object);
    
};

