import XCTest
import SwiftTreeSitter
import TreeSitterBoreal

final class TreeSitterBorealTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_boreal())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Boreal grammar")
    }
}
