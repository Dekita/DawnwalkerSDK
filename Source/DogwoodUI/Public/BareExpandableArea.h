#pragma once
#include "CoreMinimal.h"
#include "Components/NamedSlotInterface.h"
#include "Components/Widget.h"
#include "OnBareExpandableAreaExpansionChangedDelegate.h"
#include "BareExpandableArea.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UBareExpandableArea : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBareExpandableAreaExpansionChanged OnExpansionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RolloutAnimationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HeaderContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BodyContent;
    
public:
    UBareExpandableArea();

    UFUNCTION(BlueprintCallable)
    void SetIsExpanded_Animated(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExpanded() const;

protected:
    // INamedSlotInterface: real implementation unknown, but this class's own two named slots are known from its members.
    virtual void GetSlotNames(TArray<FName>& SlotNames) const override { SlotNames.Add(TEXT("HeaderContent")); SlotNames.Add(TEXT("BodyContent")); }
    virtual UWidget* GetContentForSlot(FName SlotName) const override { return SlotName == TEXT("HeaderContent") ? HeaderContent : (SlotName == TEXT("BodyContent") ? BodyContent : nullptr); }
    virtual void SetContentForSlot(FName SlotName, UWidget* Content) override {
        if (SlotName == TEXT("HeaderContent")) { HeaderContent = Content; }
        else if (SlotName == TEXT("BodyContent")) { BodyContent = Content; }
    }
};

