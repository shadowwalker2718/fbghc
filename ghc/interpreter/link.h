
extern Cell conCons;

extern Name nameRunIO;

/* The following data constructors are used to box unboxed
 * arguments and are treated differently by the code generator.
 * That is, they have primop `elem` {INT_REP,FLOAT_REP,...}.
 */
#define boxingConRep(con) ((AsmRep)(name(con).primop))
#define isBoxingCon(con) (isName(con) && boxingConRep(con) != 0)

extern Name nameMkC;
extern Name nameMkI;
extern Name nameMkW;
extern Name nameMkA;
extern Name nameMkF;
extern Name nameMkD;
extern Name nameMkStable;    

/* The following data constructors are used to make boxed but 
 * unpointed values pointed and require no special treatment
 * by the code generator.
 */
extern Name nameMkInteger;
extern Name nameMkPrimArray;            
extern Name nameMkPrimByteArray;
extern Name nameMkRef;                  
extern Name nameMkPrimMutableArray;     
extern Name nameMkPrimMutableByteArray; 
#ifdef PROVIDE_FOREIGN
extern Name nameMkForeign;   
#endif
#ifdef PROVIDE_WEAK
extern Name nameMkWeak;
#endif
#ifdef PROVIDE_CONCURRENT
extern Name nameMkThreadId;  
extern Name nameMkMVar;  
#endif

/* For every primitive type provided by the runtime system,
 * we construct a Haskell type using a declaration of the form:
 *
 *   data Int  -- no constructors given
 */
extern Type typeChar;
extern Type typeInt;
extern Type typeInteger;
extern Type typeWord;
extern Type typeAddr;
extern Type typePrimArray;            
extern Type typePrimByteArray;
extern Type typeRef;                  
extern Type typePrimMutableArray;     
extern Type typePrimMutableByteArray; 
extern Type typeFloat;
extern Type typeDouble;
extern Type typeStable;
#ifdef PROVIDE_WEAK
extern Type typeWeak;
#endif
#ifdef PROVIDE_FOREIGN
extern Type typeForeign;
#endif
#ifdef PROVIDE_CONCURRENT
extern Type typeThreadId;
extern Type typeMVar;
#endif

/* And a smaller number of types defined in plain Haskell */
extern Type typeList;
extern Type typeUnit;
extern Type typeString;
extern Type typeBool;
extern Type typeST;
extern Type typeIO;
extern Type typeException;

/* used while desugaring */
extern Name nameId;
extern Name nameOtherwise;
extern Name nameUndefined;              /* generic undefined value         */

/* used in pattern match */
#if NPLUSK
extern Name namePmSub; 
#endif
extern Name nameSel;

/* used in translation */
extern Name nameEq;     
extern Name namePMFail;
extern Name nameEqChar;
extern Name nameEqInt;
extern Name nameEqInteger;
extern Name nameEqDouble;
extern Name namePmInt;
extern Name namePmInteger;
extern Name namePmDouble;
extern Name namePmLe;
extern Name namePmSubtract;
extern Name namePmFromInteger;
extern Name nameMkIO;
extern Name nameRunST;
extern Name nameUnpackString;
extern Name namePrimSeq;
extern Name nameMap;
extern Name nameMinus;


extern Type  arrow;                     /* mkOffset(0) -> mkOffset(1)      */
extern Type  listof;                    /* [ mkOffset(0) ]                 */
extern Cell  predNum;                   /* Num (mkOffset(0))               */
extern Cell  predFractional;            /* Fractional (mkOffset(0))        */
extern Cell  predIntegral;              /* Integral (mkOffset(0))          */
extern Cell  predMonad;                 /* Monad (mkOffset(0))             */


extern Type  arrow;                     /* mkOffset(0) -> mkOffset(1)      */
extern       Type  boundPair;;                 /* (mkOffset(0),mkOffset(0))       */
extern       Type  listof;;                    /* [ mkOffset(0) ]                 */
extern       Type  typeVarToVar;;              /* mkOffset(0) -> mkOffset(0)      */

extern       Cell  predNum;;                   /* Num (mkOffset(0))               */
extern       Cell  predFractional;;            /* Fractional (mkOffset(0))        */
extern       Cell  predIntegral;;              /* Integral (mkOffset(0))          */
extern       Kind  starToStar;;                /* Type -> Type                    */
extern       Cell  predMonad;;                 /* Monad (mkOffset(0))             */


