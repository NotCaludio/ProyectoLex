PROGRAM MBoxer;

USES
    {$U UObject     } UObject,
    {$U QuickDraw   } QuickDraw,
    {$U UDraw       } UDraw,
    {$U UABC        } UABC,
    {$U UUnivText   } UTKUniversalText,
    {$U UText       } UText,
    {$U UDialog     } UDialog,
    {$U UPalette    } UPalette,
    {$U UBoxer      } UBoxer;

CONST

    phraseVersion = 1;

BEGIN

    process := TBoxProcess.CREATE(NIL, mainHeap);
    process.Commence(phraseVersion);
    process.Run;
    process.Complete(TRUE);

END.