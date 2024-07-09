BorealNode
    ( Original
        { start = TSPoint
            { pointRow = 0
            , pointColumn = 0
            }
        , end = TSPoint
            { pointRow = 3
            , pointColumn = 0
            }
        }
    ) "source"
    [ BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 0
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 0
                , pointColumn = 24
                }
            }
        ) "module_declaration"
        [ BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 6
                    }
                }
            ) "module"
        , BorealIdent
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 7
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 19
                    }
                }
            ) "Expressions "
        , BorealAtom
            ( Original
                { start = TSPoint
                    { pointRow = 0
                    , pointColumn = 19
                    }
                , end = TSPoint
                    { pointRow = 0
                    , pointColumn = 24
                    }
                }
            ) "where"
        ]
    , BorealNode
        ( Original
            { start = TSPoint
                { pointRow = 2
                , pointColumn = 0
                }
            , end = TSPoint
                { pointRow = 2
                , pointColumn = 27
                }
            }
        ) "top_level_declarations"
        [ BorealNode
            ( Original
                { start = TSPoint
                    { pointRow = 2
                    , pointColumn = 0
                    }
                , end = TSPoint
                    { pointRow = 2
                    , pointColumn = 27
                    }
                }
            ) "datatype_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 17
                        }
                    }
                ) "datatype_head"
                [ BorealAtom
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 0
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 4
                            }
                        }
                    ) "type"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 17
                            }
                        }
                    ) "Optimisation"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 18
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 19
                        }
                    }
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 20
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 27
                        }
                    }
                ) "sumtype_body"
                [ BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 20
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 22
                            }
                        }
                    ) "O1"
                , BorealAtom
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 23
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 24
                            }
                        }
                    ) "|"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 25
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 27
                            }
                        }
                    ) "O2"
                ]
            ]
        ]
    ]