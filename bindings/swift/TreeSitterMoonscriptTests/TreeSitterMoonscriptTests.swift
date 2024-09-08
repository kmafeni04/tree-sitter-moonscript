import XCTest
import SwiftTreeSitter
import TreeSitterMoonscript

final class TreeSitterMoonscriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_moonscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Moonscript grammar")
    }
}
