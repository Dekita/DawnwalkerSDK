#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "DWCommonRichTextBlock.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class DOGWOODUI_API UDWCommonRichTextBlock : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextStyleClassSet;
    
public:
    UDWCommonRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetTextStyleClassSet(UDataTable* NewTextStyleClassSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTextStyleClassSet() const;
    
};

