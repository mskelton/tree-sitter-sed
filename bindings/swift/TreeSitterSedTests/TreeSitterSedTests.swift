import SwiftTreeSitter
import TreeSitterSed
import XCTest

final class TreeSitterSedTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_sed())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading sed grammar")
    }
}
