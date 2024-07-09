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
                , pointColumn = 18
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
                    , pointColumn = 18
                    }
                }
            ) "function_declaration"
            [ BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 0
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 6
                        }
                    }
                ) "function_head"
                [ BorealIdent
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
                    ) "expr"
                , BorealIdent
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 5
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 6
                            }
                        }
                    ) "x"
                ]
            , BorealAtom
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 7
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 8
                        }
                    }
                ) "="
            , BorealNode
                ( Original
                    { start = TSPoint
                        { pointRow = 2
                        , pointColumn = 9
                        }
                    , end = TSPoint
                        { pointRow = 2
                        , pointColumn = 18
                        }
                    }
                ) "function_body"
                [ BorealNode
                    ( Original
                        { start = TSPoint
                            { pointRow = 2
                            , pointColumn = 9
                            }
                        , end = TSPoint
                            { pointRow = 2
                            , pointColumn = 18
                            }
                        }
                    ) "simple_expression"
                    [ BorealNode
                        ( Original
                            { start = TSPoint
                                { pointRow = 2
                                , pointColumn = 9
                                }
                            , end = TSPoint
                                { pointRow = 2
                                , pointColumn = 18
                                }
                            }
                        ) "binary_operation"
                        [ BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 9
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 14
                                    }
                                }
                            ) "simple_expression"
                            [ BorealNode
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 9
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 14
                                        }
                                    }
                                ) "binary_operation"
                                [ BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 9
                                            }
                                        , end = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 10
                                            }
                                        }
                                    ) "simple_expression"
                                    [ BorealIdent
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 9
                                                }
                                            , end = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 10
                                                }
                                            }
                                        ) "x"
                                    ]
                                , BorealIdent
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 11
                                            }
                                        , end = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 12
                                            }
                                        }
                                    ) "*"
                                , BorealNode
                                    ( Original
                                        { start = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 13
                                            }
                                        , end = TSPoint
                                            { pointRow = 2
                                            , pointColumn = 14
                                            }
                                        }
                                    ) "simple_expression"
                                    [ BorealAtom
                                        ( Original
                                            { start = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 13
                                                }
                                            , end = TSPoint
                                                { pointRow = 2
                                                , pointColumn = 14
                                                }
                                            }
                                        ) "2"
                                    ]
                                ]
                            ]
                        , BorealIdent
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 15
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 16
                                    }
                                }
                            ) "+"
                        , BorealNode
                            ( Original
                                { start = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 17
                                    }
                                , end = TSPoint
                                    { pointRow = 2
                                    , pointColumn = 18
                                    }
                                }
                            ) "simple_expression"
                            [ BorealAtom
                                ( Original
                                    { start = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 17
                                        }
                                    , end = TSPoint
                                        { pointRow = 2
                                        , pointColumn = 18
                                        }
                                    }
                                ) "3"
                            ]
                        ]
                    ]
                ]
            ]
        ]
    ]